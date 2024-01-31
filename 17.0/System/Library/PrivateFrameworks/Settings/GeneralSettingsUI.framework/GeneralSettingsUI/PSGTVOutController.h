@class PSGTVOutManager;

@interface PSGTVOutController : PSListController {
    PSGTVOutManager *_tvOutManager;
}

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)handleTVOutChange;
- (id)isWidescreen:(id)a0;
- (void)setTVSignal:(id)a0 specifier:(id)a1;
- (void)setWidescreen:(id)a0 specifier:(id)a1;
- (id)tvSignal:(id)a0;
- (void)writeValue:(struct __CFString { } *)a0 forKey:(struct __CFString { } *)a1;

@end
