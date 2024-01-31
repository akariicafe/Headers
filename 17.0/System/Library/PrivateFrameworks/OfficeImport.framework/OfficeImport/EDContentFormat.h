@class NSString, EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
    EDString *mFormatString;
    unsigned long long mFormatId;
    BOOL mBuiltIn;
    BOOL mReferenced;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentFormatWithFormatString:(id)a0;
+ (id)contentFormatWithFormatString:(id)a0 formatId:(unsigned long long)a1;
+ (id)contentFormatWithNSString:(id)a0 formatId:(unsigned long long)a1 builtIn:(BOOL)a2;

- (id)formatString;
- (id)init;
- (long long)key;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)builtIn;
- (unsigned long long)formatId;
- (BOOL)isEqualToContentFormat:(id)a0;
- (BOOL)referenced;
- (void)setFormatId:(unsigned long long)a0;
- (void)setReferenced:(BOOL)a0;

@end
