<html>

  <head></head>

  <script>

    window.onerror=(err)=>{alert(err)}

    window.onwarning = (msg) => {alert(msg)}

    

    Array.prototype.size = String.prototype.size = String.prototype.len = function(){

      return this.length

    }

    class Vector extends Array {

      

      set(){

        if(arguments.length != this.data.length && arguments[arguments.length-1]!=true){

          throw new RangeError("[Vector] row is not correct")

        }else if (arguments.length != this.data.length && arguments[arguments.length-1]==true){

          throw new Warning("[Vector] row is not correct")

          this.data = new Array(...arguments[0])

        }else{

          this.data = new Array(...arguments[0])

        }

      }

      get value(){

        return this.data

      }

      get values(){

        return this.data

      }

      constructor(){

        super()

        this.data = new Array(...arguments)

        //return this.data

      }

    }

    class BigNumber {

      get value(){

        for(var i=0;i<num.length;i++){}//>

      }

      get hi(){

        return 0;

      }

      constructor(num){

        this.num = num

      }

    }

    //alert([1,3,5,7,9].size())

    var e = new Vector([1,3,6,8],[2,5,6,9])

    e.set(new Vector([1,3],[2,7]).value,true)

    alert(e.value)

  </script>

</htmp>
