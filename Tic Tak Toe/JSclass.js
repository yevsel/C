class Separate{
    constructor(myArray){
        this.myArray=myArray
    }
    even(){
        let contain=[]
        for(let i=0;i<contain.length;i++){
            if (this.myArray[i]%2==0){
                contain.push[this.myArray[i]]
            }
        }
        return contain
    }
    odd(){
        let container=[]
        for(let i=0;i<container.length;i++){
            if(this.myArray[i]%2!=0){
                container.push[this.myArray[i]]
            }
        }
        return container
    }
}

let s=new Separate([1,2,3,4])
console.log(s.even())
console.log(s.odd())