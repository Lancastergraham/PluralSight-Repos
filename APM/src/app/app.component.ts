// import { Component } from '@angular/core';

import { Component } from "@angular/core";

// @Component({
//   selector: 'pm-root',
//   templateUrl: './app.component.html',
//   styleUrls: ['./app.component.css']
// })
// export class AppComponent {
//   title = 'Angular: Getting Started';
// }

@Component({
  selector: 'pm-root',
  template: `<div>
    <h1>I'm a MEGA-MAN Now!</h1>
    <div> <h2>{{pageTitle}}</h2> </div>
    <div><pm-products></pm-products></div>
    </div>
    `
})

export class AppComponent {
  pageTitle: string = "Acme Product Management"
}
