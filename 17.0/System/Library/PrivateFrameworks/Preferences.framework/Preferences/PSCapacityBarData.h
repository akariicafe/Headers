@class NSArray;

@interface PSCapacityBarData : NSObject <NSCopying> {
    NSArray *_orderedCategories;
    NSArray *_adjustedCategories;
}

@property long long categoryLimit;
@property BOOL hideTinyCategories;
@property int sortStyle;
@property long long capacity;
@property long long bytesUsed;
@property (retain, nonatomic) NSArray *categories;
@property (readonly) NSArray *orderedCategories;
@property (readonly) NSArray *adjustedCategories;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
