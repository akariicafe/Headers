@interface JetEngine.LookupBagContract : JetEngine.URLBagContract <AMSLookupBagContract> {
    void /* unknown type, empty encoding */ backing;
}

@property (nonatomic, readonly) id unpersonalizedLookupURL;

- (void).cxx_destruct;

@end
