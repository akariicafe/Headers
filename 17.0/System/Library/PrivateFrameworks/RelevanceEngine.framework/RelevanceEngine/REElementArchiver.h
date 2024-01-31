@class RERelevanceEngine;

@interface REElementArchiver : NSObject {
    RERelevanceEngine *_engine;
}

- (id)_supportedClasses;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (id)elementWithData:(id)a0;
- (id)dataWithElement:(id)a0;

@end
