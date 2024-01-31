@class PNRPhoneNumberResolver;

@interface GEOPhoneNumberResolver : NSObject {
    PNRPhoneNumberResolver *_resolver;
}

+ (id)sharedResolver;

- (id)init;
- (void)resolvePhoneNumbers:(id)a0 handler:(id /* block */)a1 queue:(id)a2;
- (void).cxx_destruct;

@end
