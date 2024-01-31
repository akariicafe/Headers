@interface HMVEventWriter : NSObject <HMVEventWriter>

- (void)clearEventsForHomeWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)writeContactSensorEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeDoorEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeFakeEventsWithDate:(id)a0 homeIdentifier:(id)a1 count:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)writeGarageDoorEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeLockEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeSecuritySystemEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeSmokeDetectorEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;
- (void)writeWindowEventWithDate:(id)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2 roomName:(id)a3 accessoryIdentifier:(id)a4 accessoryName:(id)a5 state:(long long)a6 userIdentifier:(id)a7 completion:(id /* block */)a8;

@end
