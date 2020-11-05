module Cucumber = {

    module Models = {
        type dataTable;
        [@bs.new] [@bs.module "@cucumber/cucumber"] 
        external dataTable_: unit => dataTable = "DataTable";
        [@bs.send]
        external rows: (dataTable) => array(array(string)) = "rows";
    }

    type status = [ `pending | `ambiguous | `failed | `passed ];

    type stepDefinitionCode = Models.dataTable => status;
    type stepDefinitionCodeString = string => status;
    type stepDefinitionCodeString2 = (string, string) => status;
    type stepDefinitionCodeString3 = (string, string, string) => status;
    type stepDefinitionCodeString4 = (string, string, string, string) => status;

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external given: (string, stepDefinitionCode) => unit = "Given";

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external givenString: (string, stepDefinitionCodeString) => unit = "Given";

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external givenString3: (string, stepDefinitionCodeString3) => unit = "Given";

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external whenString2: (string, stepDefinitionCodeString2) => unit = "When";

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external thenString3: (string, stepDefinitionCodeString3) => unit = "Then";

    [@bs.module "@cucumber/cucumber"] [@bs.val]
    external thenString4: (string, stepDefinitionCodeString4) => unit = "Then";
}