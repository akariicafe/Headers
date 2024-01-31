@class NSString, NSArray, NSValue;

@interface _CNUILikenessFingerprintNonpersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl>

@property (readonly, copy) NSString *givenName;
@property (readonly, copy) NSString *middleName;
@property (readonly, copy) NSString *familyName;
@property (readonly, copy) NSArray *emailAddresses;
@property (readonly, copy) NSArray *phoneNumbers;
@property (readonly, copy) NSValue *imageDataPointer;
@property (readonly, copy) NSValue *thumbnailImageDataPointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasContactIdentifier:(id)a0;
- (id)initWithGivenName:(id)a0 middleName:(id)a1 familyName:(id)a2 emailAddresses:(id)a3 phoneNumbers:(id)a4 imageData:(id)a5 thumbnailImageData:(id)a6;

@end
