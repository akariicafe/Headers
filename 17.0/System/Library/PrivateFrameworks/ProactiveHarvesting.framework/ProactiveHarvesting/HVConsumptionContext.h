@class HVHtmlParser, NSString, _PASLazyResult, NSObject;
@protocol BMIdentifiableContentEvent;

@interface HVConsumptionContext : NSObject {
    id /* block */ _scheduledTaskShouldContinueBlock;
    _PASLazyResult *_cachedParser;
}

@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) HVHtmlParser *htmlParser;

- (id)initWithContent:(id)a0 contentProtection:(id)a1 scheduledTaskShouldContinueBlock:(id /* block */)a2;
- (BOOL)shouldContinue;
- (id)description;
- (void).cxx_destruct;
- (id)_parseHtmlContentIfAvailable;

@end
