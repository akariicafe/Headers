@class NSString;

@interface _CNUILikenessFingerprintPersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl>

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContactIdentifier:(id)a0;
- (BOOL)hasContactIdentifier:(id)a0;

@end
