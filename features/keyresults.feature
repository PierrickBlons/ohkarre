Feature: Managing Objective Key Results

    Background:
        Given existing users
           | id | login   |
           | 1  | Georges |
           | 2  | Lucas   |

        Given existing objectives for existing users
            | id | objective_name | id_user |
            | 1  | Increase ARR   | 1       |
            | 2  | Improve SLAs   | 2       |

    Scenario Outline: Adding a Key Result to an objective empty objective
        Given the user "<username>" is authenticated
        And an objective named "<objective_name>" is initialized
        When he adds a key result named "<keyresult_name>" with "<target_value>" and "<current_value>"
        Then the completion of the key result "<keyresult_progress>" is the percentage of progresss versus "<target_value>" and "<start_value>"
        Examples:
            | username | objective_name | keyresult_name               | target_value | start_value | current_value  | keyresult_progress |
            | Georges  | Increase ARR   | Register new users           | 100          | 0           | 0              | 0                  |
            | Lucas    | Improve SLAs   | Reduce average response time | 100          | 200         | 0              | 0                  |

    Scenario Outline: Updating a Key Result progress
        Given the user "<username>" is authenticated
        And an objective named "<objective_name>" is initialized
        And he adds a key result named "<keyresult_name>" with "<target_value>" and "<current_value>"
        When he updates the key result "<keyresult_name>" progress with "<current_value>"
        Then the key result "<keyresult_name>" progress "<keyresult_progress>" equals the percentage of progression from "<start_value>" to "<target_value>"
        Examples:
            | username | objective_name | keyresult_name               | target_value | start_value | current_value | keyresult_progress |
            | Georges  | Increase ARR   | Register new users           | 100          | 0           | 20            | 20                 |
            | Lucas    | Improve SLAs   | Reduce average response time | 100          | 200         | 150           | 50                 |



            
            