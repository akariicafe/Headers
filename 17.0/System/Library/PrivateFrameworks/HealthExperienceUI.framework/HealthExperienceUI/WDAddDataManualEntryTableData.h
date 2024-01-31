@class NSArray;

@interface WDAddDataManualEntryTableData : NSObject {
    NSArray *_sections;
}

- (id)cellForRowAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)initWithSections:(id)a0;
- (id)itemForCell:(id)a0;

@end
