@class NSArray, NSString, NSNumber;

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *anchors;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *primeToken;
@property (copy, nonatomic) NSNumber *syncDataReset;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAnchorsResponse;
+ (id)getAnchorsResponseWithDictionary:(id)a0 context:(id)a1;

@end
