@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject {
    RETrainingSimulator *_simulator;
}

- (void).cxx_destruct;
- (id)_createHTMLTableFromDictionary:(id)a0;
- (id)_linkElementForTableItem:(id)a0 paths:(id)a1;
- (id)_createContentItemWithTitle:(id)a0 content:(id)a1;
- (id)_createHTMLTableRowFromArray:(id)a0 itemElementTag:(id)a1;
- (id)_createTableWithItems:(id)a0 itemFormatBlock:(id /* block */)a1 valueBlock:(id /* block */)a2;
- (id)_linkToPaths:(id)a0;
- (id)_stringElementForObject:(id)a0;
- (id)_stringForObject:(id)a0;
- (id)_urlFromPaths:(id)a0;
- (void)generateDiagnosticsForPaths:(id)a0 completion:(id /* block */)a1;
- (id)initWithSimulator:(id)a0;

@end
