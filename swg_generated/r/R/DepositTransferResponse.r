# Upbit Open API
#
# ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
#
# OpenAPI spec version: 1.0.0
# Contact: ujhin942@gmail.com
# Generated by: https://github.com/swagger-api/swagger-codegen.git


#' DepositTransferResponse Class
#'
#' @field success 
#' @field message 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DepositTransferResponse <- R6::R6Class(
  'DepositTransferResponse',
  public = list(
    `success` = NULL,
    `message` = NULL,
    initialize = function(`success`, `message`){
      if (!missing(`success`)) {
        self$`success` <- `success`
      }
      if (!missing(`message`)) {
        stopifnot(is.character(`message`), length(`message`) == 1)
        self$`message` <- `message`
      }
    },
    toJSON = function() {
      DepositTransferResponseObject <- list()
      if (!is.null(self$`success`)) {
        DepositTransferResponseObject[['success']] <- self$`success`
      }
      if (!is.null(self$`message`)) {
        DepositTransferResponseObject[['message']] <- self$`message`
      }

      DepositTransferResponseObject
    },
    fromJSON = function(DepositTransferResponseJson) {
      DepositTransferResponseObject <- jsonlite::fromJSON(DepositTransferResponseJson)
      if (!is.null(DepositTransferResponseObject$`success`)) {
        self$`success` <- DepositTransferResponseObject$`success`
      }
      if (!is.null(DepositTransferResponseObject$`message`)) {
        self$`message` <- DepositTransferResponseObject$`message`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "success": %s,
           "message": %s
        }',
        self$`success`,
        self$`message`
      )
    },
    fromJSONString = function(DepositTransferResponseJson) {
      DepositTransferResponseObject <- jsonlite::fromJSON(DepositTransferResponseJson)
      self$`success` <- DepositTransferResponseObject$`success`
      self$`message` <- DepositTransferResponseObject$`message`
    }
  )
)