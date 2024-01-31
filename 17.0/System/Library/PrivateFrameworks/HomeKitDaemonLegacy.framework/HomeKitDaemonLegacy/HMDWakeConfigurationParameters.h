@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *delimiter;
@property (retain, nonatomic) NSData *primaryIdentifier;
@property (retain, nonatomic) NSMutableArray *secondaryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithDelimiter:(id)a0 primaryIdentifier:(id)a1 secondaryIdentifier:(id)a2;

@end
