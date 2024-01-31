@class NSString, ARPHomeControlCorrelationUtilities, ARPHomeControlSuggester;

@interface ARPHomeControlNextActionCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities;
@property (retain, nonatomic) ARPHomeControlSuggester *suggester;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithCorrelationsFile:(id)a0;

@end
