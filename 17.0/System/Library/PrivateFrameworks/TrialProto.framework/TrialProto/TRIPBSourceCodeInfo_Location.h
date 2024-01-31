@class TRIPBInt32Array, NSString, NSMutableArray;

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (readonly, nonatomic) unsigned long long pathArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *spanArray;
@property (readonly, nonatomic) unsigned long long spanArray_Count;
@property (copy, nonatomic) NSString *leadingComments;
@property (nonatomic) BOOL hasLeadingComments;
@property (copy, nonatomic) NSString *trailingComments;
@property (nonatomic) BOOL hasTrailingComments;
@property (retain, nonatomic) NSMutableArray *leadingDetachedCommentsArray;
@property (readonly, nonatomic) unsigned long long leadingDetachedCommentsArray_Count;

+ (id)descriptor;

@end
