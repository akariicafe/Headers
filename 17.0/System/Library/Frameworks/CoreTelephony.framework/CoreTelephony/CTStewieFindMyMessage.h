@class NSData, NSString;

@interface CTStewieFindMyMessage : NSObject <CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *encryptedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToFindMyMessage:(id)a0;

@end
