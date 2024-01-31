@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}

- (id)description;
- (void).cxx_destruct;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;
- (id)initWithPNRResultSet:(id)a0;

@end
