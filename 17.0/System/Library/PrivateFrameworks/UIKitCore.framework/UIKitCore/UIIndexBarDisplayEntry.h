@class UIIndexBarEntry;

@interface UIIndexBarDisplayEntry : NSObject

@property (retain, nonatomic) UIIndexBarEntry *entry;
@property (nonatomic) long long entryIndex;
@property (nonatomic) long long displayEntryIndex;

- (id)description;
- (void).cxx_destruct;

@end
