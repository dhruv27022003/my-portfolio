console.log("runn11");
$(document).ready(function(){
   console.log("runn");
   $('.k').on(
   {mouseenter :
       function(){
        // $('.k').animate({opacity:0.0},100);
        $('.k').attr("src","IMG_2560.jpeg");   
        console.log("image clicked");
           $('.k').animate({opacity:0.0},2000);
           
        // $('.k').attr("src","C.jpeg");   
        // $('.k').animate({opacity:1},1000);  
    }
   }
   )

$('.k').mouseleave(function(){
    console.log("image clickeddd");
    

   
    $('.k').animate({opacity:0.0},100);
    $('.k').attr("src","C.jpeg");           
    // $('.k').attr("src","C.jpeg");   
    $('.k').animate({opacity:1},5000);  
})


   $('.name').mouseenter(
       function(){
        $('.name').slideToggle('1000');
        $('.name').slideToggle('1000');
        $('.about').slideToggle('1000');
        $('.about').slideToggle('1000');
      //   $('.bu').slideToggle('1000');
      //   $('.bu').slideToggle('1000');
    
   })



})