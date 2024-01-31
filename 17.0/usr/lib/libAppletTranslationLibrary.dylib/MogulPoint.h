@class NSNumber, NSDateComponents, NSString;

@interface MogulPoint : NSObject

@property (retain) NSNumber *balance;
@property (retain) NSDateComponents *expiration;
@property (retain) NSString *name;
@property BOOL isExpired;

- (void).cxx_destruct;

@end
