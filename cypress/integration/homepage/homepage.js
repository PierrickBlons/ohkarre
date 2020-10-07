import { Given, Then } from 'cypress-cucumber-preprocessor/steps';

Given('I open the homepage', () => {
    cy.visit('./public/index.html');
});


Then('I should see the coming soon message', () => {
    cy.get('.centered')
            .children('p')
            .should('contain', 'Coming soon...');
});
