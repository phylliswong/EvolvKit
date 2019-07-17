//
//  DefaultAllocationStore.swift
//  EvolvKit_Example
//
//  Created by phyllis.wong on 7/3/19.
//  Copyright © 2019 CocoaPods. All rights reserved.
//

import SwiftyJSON

public class DefaultAllocationStore : AllocationStoreProtocol {
  public var cache: LRUCache
  
  public init(size: Int) {
    self.cache = LRUCache(size)
  }
  public func get(uid: String) -> [JSON] {
    return cache.get(uid) ?? [JSON]()
  }
  
  public func set(uid: String, allocations: [JSON]) {
    cache.set(uid, val: allocations)
  }
}
