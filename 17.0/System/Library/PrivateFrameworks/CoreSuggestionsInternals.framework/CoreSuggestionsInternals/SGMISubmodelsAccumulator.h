@class NSDictionary;

@interface SGMISubmodelsAccumulator : NSObject

@property (readonly) NSDictionary *submodels;

- (id)init;
- (void).cxx_destruct;
- (void)commitToStore:(id)a0 updateDate:(id)a1;
- (void)ingest:(id)a0 asSalient:(BOOL)a1;

@end
