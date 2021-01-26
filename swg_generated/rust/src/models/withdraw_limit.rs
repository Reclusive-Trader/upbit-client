/* 
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

/// WithdrawLimit : 출금 제약 정보

#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct WithdrawLimit {
  /// 화폐를 의미하는 영문 대문자 코드
  #[serde(rename = "currency")]
  currency: Option<String>,
  /// 출금 최소 금액/수량
  #[serde(rename = "minimum")]
  minimum: Option<String>,
  /// 1회 출금 한도
  #[serde(rename = "onetime")]
  onetime: Option<String>,
  /// 1일 출금 한도
  #[serde(rename = "daily")]
  daily: Option<String>,
  /// 1일 잔여 출금 한도
  #[serde(rename = "remaining_daily")]
  remaining_daily: Option<String>,
  /// 통합 1일 잔여 출금 한도
  #[serde(rename = "remaining_daily_krw")]
  remaining_daily_krw: Option<String>,
  /// 출금 금액/수량 소수점 자리 수
  #[serde(rename = "fixed")]
  fixed: Option<f32>,
  /// 출금 지원 여부
  #[serde(rename = "can_withdraw")]
  can_withdraw: Option<bool>
}

impl WithdrawLimit {
  /// 출금 제약 정보
  pub fn new() -> WithdrawLimit {
    WithdrawLimit {
      currency: None,
      minimum: None,
      onetime: None,
      daily: None,
      remaining_daily: None,
      remaining_daily_krw: None,
      fixed: None,
      can_withdraw: None
    }
  }

  pub fn set_currency(&mut self, currency: String) {
    self.currency = Some(currency);
  }

  pub fn with_currency(mut self, currency: String) -> WithdrawLimit {
    self.currency = Some(currency);
    self
  }

  pub fn currency(&self) -> Option<&String> {
    self.currency.as_ref()
  }

  pub fn reset_currency(&mut self) {
    self.currency = None;
  }

  pub fn set_minimum(&mut self, minimum: String) {
    self.minimum = Some(minimum);
  }

  pub fn with_minimum(mut self, minimum: String) -> WithdrawLimit {
    self.minimum = Some(minimum);
    self
  }

  pub fn minimum(&self) -> Option<&String> {
    self.minimum.as_ref()
  }

  pub fn reset_minimum(&mut self) {
    self.minimum = None;
  }

  pub fn set_onetime(&mut self, onetime: String) {
    self.onetime = Some(onetime);
  }

  pub fn with_onetime(mut self, onetime: String) -> WithdrawLimit {
    self.onetime = Some(onetime);
    self
  }

  pub fn onetime(&self) -> Option<&String> {
    self.onetime.as_ref()
  }

  pub fn reset_onetime(&mut self) {
    self.onetime = None;
  }

  pub fn set_daily(&mut self, daily: String) {
    self.daily = Some(daily);
  }

  pub fn with_daily(mut self, daily: String) -> WithdrawLimit {
    self.daily = Some(daily);
    self
  }

  pub fn daily(&self) -> Option<&String> {
    self.daily.as_ref()
  }

  pub fn reset_daily(&mut self) {
    self.daily = None;
  }

  pub fn set_remaining_daily(&mut self, remaining_daily: String) {
    self.remaining_daily = Some(remaining_daily);
  }

  pub fn with_remaining_daily(mut self, remaining_daily: String) -> WithdrawLimit {
    self.remaining_daily = Some(remaining_daily);
    self
  }

  pub fn remaining_daily(&self) -> Option<&String> {
    self.remaining_daily.as_ref()
  }

  pub fn reset_remaining_daily(&mut self) {
    self.remaining_daily = None;
  }

  pub fn set_remaining_daily_krw(&mut self, remaining_daily_krw: String) {
    self.remaining_daily_krw = Some(remaining_daily_krw);
  }

  pub fn with_remaining_daily_krw(mut self, remaining_daily_krw: String) -> WithdrawLimit {
    self.remaining_daily_krw = Some(remaining_daily_krw);
    self
  }

  pub fn remaining_daily_krw(&self) -> Option<&String> {
    self.remaining_daily_krw.as_ref()
  }

  pub fn reset_remaining_daily_krw(&mut self) {
    self.remaining_daily_krw = None;
  }

  pub fn set_fixed(&mut self, fixed: f32) {
    self.fixed = Some(fixed);
  }

  pub fn with_fixed(mut self, fixed: f32) -> WithdrawLimit {
    self.fixed = Some(fixed);
    self
  }

  pub fn fixed(&self) -> Option<&f32> {
    self.fixed.as_ref()
  }

  pub fn reset_fixed(&mut self) {
    self.fixed = None;
  }

  pub fn set_can_withdraw(&mut self, can_withdraw: bool) {
    self.can_withdraw = Some(can_withdraw);
  }

  pub fn with_can_withdraw(mut self, can_withdraw: bool) -> WithdrawLimit {
    self.can_withdraw = Some(can_withdraw);
    self
  }

  pub fn can_withdraw(&self) -> Option<&bool> {
    self.can_withdraw.as_ref()
  }

  pub fn reset_can_withdraw(&mut self) {
    self.can_withdraw = None;
  }

}


