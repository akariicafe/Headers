@class NSArray;

@interface WFDeletePhotosIntent : INIntent

@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSArray *assetIdentifiers;

@end
