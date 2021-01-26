/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.18
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UpbitOpenApi);
  }
}(this, function(expect, UpbitOpenApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('Ask', function() {
      beforeEach(function() {
        instance = new UpbitOpenApi.Ask();
      });

      it('should create an instance of Ask', function() {
        // TODO: update the code to test Ask
        expect(instance).to.be.a(UpbitOpenApi.Ask);
      });

      it('should have the property currency (base name: "currency")', function() {
        // TODO: update the code to test the property currency
        expect(instance).to.have.property('currency');
        // expect(instance.currency).to.be(expectedValueLiteral);
      });

      it('should have the property priceUnit (base name: "price_unit")', function() {
        // TODO: update the code to test the property priceUnit
        expect(instance).to.have.property('priceUnit');
        // expect(instance.priceUnit).to.be(expectedValueLiteral);
      });

      it('should have the property minTotal (base name: "min_total")', function() {
        // TODO: update the code to test the property minTotal
        expect(instance).to.have.property('minTotal');
        // expect(instance.minTotal).to.be(expectedValueLiteral);
      });

    });
  });

}));