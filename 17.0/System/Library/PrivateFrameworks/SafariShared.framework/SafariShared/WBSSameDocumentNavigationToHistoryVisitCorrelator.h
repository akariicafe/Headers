@class NSMutableArray;

@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject {
    NSMutableArray *_visits;
}

- (id)init;
- (void).cxx_destruct;
- (void)noteVisit:(id)a0;
- (id)visitForSameDocumentNavigationToURL:(id)a0;

@end
