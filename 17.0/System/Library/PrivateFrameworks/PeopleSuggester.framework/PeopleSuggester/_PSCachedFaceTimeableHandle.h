@class NSString, NSDate;

@interface _PSCachedFaceTimeableHandle : NSObject

@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *handle;

- (void).cxx_destruct;
- (id)initWithExpirationDate:(id)a0 handle:(id)a1;

@end
