@class NSArray, NSNumber, NSString;

@interface AMDModelInputMetadata : NSObject <PostRemapOperation>

@property long long dataType;
@property (retain, nonatomic) NSArray *shape;
@property (retain, nonatomic) NSNumber *size;
@property (retain, nonatomic) NSNumber *paddingValue;
@property (retain, nonatomic) NSString *postRemapOperation;
@property (retain, nonatomic) NSNumber *hashOpModValue;
@property (retain, nonatomic) NSNumber *truncateOpMinValue;
@property (retain, nonatomic) NSNumber *truncateOpMaxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getDataTypeFromString:(id)a0;

- (id)initWithDictionary:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)getShape;
- (id)getSize;
- (id)getPaddingValue;
- (long long)getDataType;
- (id)getHashOpModValue;
- (id)getPostRemapOperationName;
- (id)getTruncateOpMaxValue;
- (id)getTruncateOpMinValue;

@end
