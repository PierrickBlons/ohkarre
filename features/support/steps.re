open Cucumber;
open Cucumber.Models;
open Repositories;

let generateUsers = (usersData: dataTable) => {
  let usersInfo = rows(usersData);
  InMemoryUserRepository.addUsers(usersInfo[1]);
  `passed;
};

let generateObjectives = (objectivesData: dataTable) => {
  let objectivesInfo = rows(objectivesData);
  `pending;
};

let authenticateUser = (string: string) => { 
    `pending;
};

let initializeObjectiveValues = (string: string) => {
  `pending;
}

let addKeyResult = (string: string, string2: string, string3: string) => { 
  `pending;
};

let updateKeyResult = (string: string, string2: string) => {
  `pending;
}

let assertKeyResultCompletion = (string: string, string2: string, string3: string) => { 
  `pending;
}

let assertKeyResultProgress = (string: string, string2: string, string3: string, string4: string) => {
  `pending;
}

Cucumber.given("existing users", generateUsers);
Cucumber.given("existing objectives for existing users", generateObjectives);
Cucumber.givenString("the user {string} is authenticated", authenticateUser);
Cucumber.givenString("an objective named {string} is initialized", initializeObjectiveValues);
Cucumber.givenString3("he adds a key result named {string} with {string} and {string}", addKeyResult);
Cucumber.whenString2("he updates the key result {string} progress with {string}", updateKeyResult);
Cucumber.thenString3("the completion of the key result {string} is the percentage of progresss versus {string} and {string}", assertKeyResultCompletion);
Cucumber.thenString4("the key result {string} progress {string} equals the percentage of progression from {string} to {string}", assertKeyResultProgress);