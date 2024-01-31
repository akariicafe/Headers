@class NSString;

@interface SGSuggestionAction : NSObject {
    NSString *_title;
    id /* block */ _handler;
}

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void)execute;
- (void).cxx_destruct;
- (id)title;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
