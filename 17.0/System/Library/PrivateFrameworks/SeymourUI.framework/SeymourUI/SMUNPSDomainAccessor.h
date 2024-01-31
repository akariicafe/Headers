@class NPSDomainAccessor;

@interface SMUNPSDomainAccessor : NSObject {
    NPSDomainAccessor *_domainAccessor;
}

- (id)initWithDomain:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)synchronize;
- (id)objectForKey:(id)a0;

@end
