@class NSString, MSSearch;

@interface MSSearchProxy : NSObject <MSDSearchResultsProtocol>

@property (weak, nonatomic) MSSearch *search;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)foundResults:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithSearch:(id)a0;

@end
