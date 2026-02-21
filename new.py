tasks = []
def displayTasks(all_tasks):
    print("\nYour tasks: ")
def newOperation(all_tasks):
    operation = input("clack 'A' to add a task ,click 'E' to edit a task ,'R' to remove a task,'F' to quit the app") 
    if operation=='A':
        pass
    elif operation == 'E':
        pass
    elif operation == 'R':
        pass
    elif operation == 'F':
        return 
    else:
        newOperation(all_tasks)




def addtask(all_tasks):
    new_task = input('add a task: ')
    all_tasks.append(new_task)

    for task in all_tasks:
        print(task)

#start application 
newOperation(tasks)
addtask(tasks)