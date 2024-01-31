@class NSArray, NSString, NSDate;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contentTasteItems;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long responseRevisionID;
@property (nonatomic, getter=isCachedResponse) BOOL cachedResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithCoder:(id)a0;

@end
