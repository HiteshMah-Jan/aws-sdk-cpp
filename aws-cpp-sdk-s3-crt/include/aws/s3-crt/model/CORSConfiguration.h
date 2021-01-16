﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/CORSRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Describes the cross-origin access configuration for objects in an Amazon S3
   * bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
   * Cross-Origin Resource Sharing</a> in the <i>Amazon Simple Storage Service
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CORSConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API CORSConfiguration
  {
  public:
    CORSConfiguration();
    CORSConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    CORSConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline const Aws::Vector<CORSRule>& GetCORSRules() const{ return m_cORSRules; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline bool CORSRulesHasBeenSet() const { return m_cORSRulesHasBeenSet; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline void SetCORSRules(const Aws::Vector<CORSRule>& value) { m_cORSRulesHasBeenSet = true; m_cORSRules = value; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline void SetCORSRules(Aws::Vector<CORSRule>&& value) { m_cORSRulesHasBeenSet = true; m_cORSRules = std::move(value); }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline CORSConfiguration& WithCORSRules(const Aws::Vector<CORSRule>& value) { SetCORSRules(value); return *this;}

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline CORSConfiguration& WithCORSRules(Aws::Vector<CORSRule>&& value) { SetCORSRules(std::move(value)); return *this;}

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline CORSConfiguration& AddCORSRules(const CORSRule& value) { m_cORSRulesHasBeenSet = true; m_cORSRules.push_back(value); return *this; }

    /**
     * <p>A set of origins and methods (cross-origin access that you want to allow).
     * You can add up to 100 rules to the configuration.</p>
     */
    inline CORSConfiguration& AddCORSRules(CORSRule&& value) { m_cORSRulesHasBeenSet = true; m_cORSRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CORSRule> m_cORSRules;
    bool m_cORSRulesHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
