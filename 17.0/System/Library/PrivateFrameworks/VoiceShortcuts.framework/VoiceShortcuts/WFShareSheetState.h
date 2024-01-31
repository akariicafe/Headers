@class NSDictionary;

@interface WFShareSheetState : NSObject

@property (class, retain, nonatomic) NSDictionary *shareSheetShortcuts;

+ (id)storageURL;

@end
