@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask {
    NSString *_address;
}

- (id)run:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (void)removeMailtoPrefix;

@end
