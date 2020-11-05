open Domain;

module InMemoryUserRepository = {
  let users: ref(array(user)) = ref([||]);

  let addUsers = (names: array(string)) => {
    users := Belt_Array.map(names, name => {id: "", name});
  };
};
