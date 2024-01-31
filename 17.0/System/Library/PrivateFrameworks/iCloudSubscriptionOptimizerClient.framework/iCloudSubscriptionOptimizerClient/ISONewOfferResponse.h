@interface ISONewOfferResponse : NSObject

- (id)error;
- (BOOL)shouldDisplayOfferNow;
- (id)toContext;

@end
