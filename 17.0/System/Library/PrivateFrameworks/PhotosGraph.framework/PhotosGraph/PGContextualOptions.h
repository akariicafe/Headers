@class NSArray, NSDateComponents, NSDate;

@interface PGContextualOptions : NSObject {
    NSArray *_contextualRules;
}

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDateComponents *localTodayComponents;

- (void).cxx_destruct;
- (id)availableContextualRules;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1 curationManager:(id)a2 options:(id)a3 loggingConnection:(id)a4;

@end
