let p=new Promise((res,rej)=>{
    res();
})
p.then((data)=>{
    console.log("scanning...")
    return new Promise((res,rej)=>{
        let flag="123"
        if(flag){
            console.log("password verified")
            res();
        }
        else{
            console.log("wrong password")
            rej();
        }
    })

}).then((data)=>{
    return new Promise((res,rej)=>{
        res("money debited")
    })
}).then((data)=>{
    console.log(data)
    return new Promise((res,rej)=>{
        res("money recieved")
    })
}).then((data)=>{
    console.log(data)
    return new Promise((res,rej)=>{
        res("transaction succesful")
    })
}).then((data)=>{
    console.log(data)
})
.catch(()=>{
    console.log("transaction failed")
})