@class NSMapTable, NSDictionary, NSData, NSString, NSMutableArray;

@interface MSVOPACKEncoder : NSCoder <NSObject>

@property (nonatomic) BOOL hasFinished;
@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) NSMapTable *objectLookupTable;
@property (readonly, nonatomic) NSMutableArray *wrapperStack;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *encodedData;
@property (readonly, nonatomic) BOOL hasTopLevelData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodedDataWithRootObject:(id)a0 error:(id *)a1;
+ (id)encodedDataWithRootObject:(id)a0 userInfo:(id)a1 error:(id *)a2;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (void).cxx_destruct;
- (void)encodeRootObject:(id)a0;
- (BOOL)requiresSecureCoding;
- (void)finishEncoding;
- (id)_convertObject:(id)a0;
- (id)_convertNumber:(id)a0;
- (void)_encodeNumber:(id)a0 forKey:(id)a1;
- (void)beginEncodingPartialTopLevelObject:(id)a0;
- (id)encodedDataWithError:(id *)a0;
- (void)finishEncodingPartialTopLevelObject;
- (BOOL)finishEncodingWithError:(id *)a0;
- (void)msv_setUserInfo:(id)a0;
- (id)msv_userInfo;

@end
