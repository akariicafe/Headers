@class NSString;

@interface TMLUIControlActionTarget : NSObject {
    NSString *_signalName;
    unsigned long long _controlEvent;
}

- (void).cxx_destruct;
- (void)controlAction:(id)a0 forEvent:(id)a1;
- (id)initWithSignal:(id)a0 controlEvent:(unsigned long long)a1;

@end
