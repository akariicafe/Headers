@class TPSTipStatusController;

@interface TPSContentStatusEventsProvider : TPSEventsProvider {
    TPSTipStatusController *_tipStatusController;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isStatusType:(long long)a0 observedInStatus:(id)a1;
- (BOOL)_isStatusType:(long long)a0 observedInStatuses:(id)a1;
- (void)queryEvents:(id)a0;

@end
