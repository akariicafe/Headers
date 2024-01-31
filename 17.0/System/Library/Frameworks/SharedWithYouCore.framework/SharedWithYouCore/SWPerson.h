@class NSData, SWPersonIdentity;

@interface SWPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id slPerson;
@property (readonly, nonatomic) NSData *customThumbnailImageData;
@property (retain, nonatomic) SWPersonIdentity *identity;

- (void)encodeWithCoder:(id)a0;
- (id)contact;
- (void).cxx_destruct;
- (id)handle;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)thumbnailImageData;
- (id)initWithHandle:(id)a0 displayName:(id)a1 thumbnailImageData:(id)a2;
- (id)initWithHandle:(id)a0 identity:(id)a1 displayName:(id)a2 thumbnailImageData:(id)a3;

@end
