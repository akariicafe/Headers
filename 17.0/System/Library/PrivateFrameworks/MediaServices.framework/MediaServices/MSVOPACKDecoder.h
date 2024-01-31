@class NSArray, NSMapTable, NSDictionary, NSString, NSMutableArray;
@protocol MSVOPACKDecoderDelegate;

@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder>

@property (readonly, nonatomic) NSMutableArray *allowedClassesStack;
@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSMapTable *objectLookupTable;
@property (readonly, nonatomic) NSMutableArray *wrapperStack;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) id<MSVOPACKDecoderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)decodedObjectOfClass:(Class)a0 fromData:(id)a1 userInfo:(id)a2 error:(id *)a3;
+ (id)decodedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;
+ (id)decodedObjectOfClasses:(id)a0 fromData:(id)a1 userInfo:(id)a2 error:(id *)a3;

- (id)allowedClasses;
- (BOOL)containsValueForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (BOOL)allowsKeyedCoding;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (void).cxx_destruct;
- (int)decodeIntForKey:(id)a0;
- (BOOL)requiresSecureCoding;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)initForReadingFromData:(id)a0 error:(id *)a1;
- (id)_decodeNumberForKey:(id)a0;
- (id)_decodeOPACKObject:(id)a0 ofClasses:(id)a1;
- (void)_validateClass:(Class)a0 fromSupportedClasses:(id)a1;
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)a0;
- (id)decodeRootObjectOfClass:(Class)a0 error:(id *)a1;
- (id)decodeRootObjectOfClasses:(id)a0 error:(id *)a1;
- (void)finishDecodingPartialTopLevelObject;
- (id)initForReadingFromData:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (void)msv_setUserInfo:(id)a0;
- (id)msv_userInfo;

@end
