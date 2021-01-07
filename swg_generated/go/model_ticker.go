/*
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * API version: 1.1.6
 * Contact: ujhin942@gmail.com
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type Ticker struct {
	// 종목 구분 코드
	Market string `json:"market,omitempty"`
	// 최근 거래 일자(UTC)
	TradeDate string `json:"trade_date,omitempty"`
	// 최근 거래 시각(UTC)
	TradeTime string `json:"trade_time,omitempty"`
	// 최근 거래 일자(KST)
	TradeDateKst string `json:"trade_date_kst,omitempty"`
	// 최근 거래 시각(KST)
	TradeTimeKst string `json:"trade_time_kst,omitempty"`
	// 시가
	OpeningPrice float64 `json:"opening_price,omitempty"`
	// 고가
	HighPrice float64 `json:"high_price,omitempty"`
	// 저가
	LowPrice float64 `json:"low_price,omitempty"`
	// 종가
	TradePrice float64 `json:"trade_price,omitempty"`
	// 전일 종가
	PrevClosingPrice float64 `json:"prev_closing_price,omitempty"`
	// EVEN : 보합 RISE : 상승 FALL : 하락 
	Change string `json:"change,omitempty"`
	// 변화액의 절대값
	ChangePrice float64 `json:"change_price,omitempty"`
	// 변화율의 절대값
	ChangeRate float64 `json:"change_rate,omitempty"`
	// 부호가 있는 변화액
	SignedChangePrice float64 `json:"signed_change_price,omitempty"`
	// 부호가 있는 변화율
	SignedChangeRate float64 `json:"signed_change_rate,omitempty"`
	// 가장 최근 거래량
	TradeVolume float64 `json:"trade_volume,omitempty"`
	// 누적 거래대금 (UTC 0시 기준)
	AccTradePrice float64 `json:"acc_trade_price,omitempty"`
	// 24시간 누적 거래대금
	AccTradePrice24h float64 `json:"acc_trade_price_24h,omitempty"`
	// 누적 거래량 (UTC 0시 기준)
	AccTradeVolume float64 `json:"acc_trade_volume,omitempty"`
	// 24시간 누적 거래량
	AccTradeVolume24h float64 `json:"acc_trade_volume_24h,omitempty"`
	// 52주 신고가
	Highest52WeekPrice float64 `json:"highest_52_week_price,omitempty"`
	// 52주 신고가 달성일
	Highest52WeekDate string `json:"highest_52_week_date,omitempty"`
	// 52주 신저가
	Lowest52WeekPrice float64 `json:"lowest_52_week_price,omitempty"`
	// 52주 신저가 달성일
	Lowest52WeekDate string `json:"lowest_52_week_date,omitempty"`
	// 타임스탬프
	Timestamp float32 `json:"timestamp,omitempty"`
}