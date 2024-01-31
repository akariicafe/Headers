@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)init;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (id)description;
- (unsigned long long)splitterState;
- (void).cxx_destruct;
- (id)splitterDeviceList;

@end
