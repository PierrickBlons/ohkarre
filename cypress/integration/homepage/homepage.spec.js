context('Homepage', () => {
    beforeEach(() => {
      cy.visit('./public/index.html')
    })

    it('should display logo', () => {
        cy.get('.centered')
            .children('svg')
            .should('have.id', 'ohkarre-logo')
    })

    it('should display coming soon message', () => {
        cy.get('.centered')
            .children('p')
            .should('contain', 'Coming soon...')
    })
})
